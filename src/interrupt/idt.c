#include "idt.h"

struct IDT interrupt_descriptor_table = {
    .table = {
        // Null Descriptor
        {
            .offset_low = 0,
            .segment = 0,
            ._reserved = 0,
            ._r_bit_1 = 0,
            ._r_bit_2 = 0,
            .gate_32 = 0,
            ._r_bit_3 = 0,
            .privilege = 0,
            .valid = 0,
            .offset_high = 0},
            }};

struct IDTR _idt_idtr = {
    .limit = sizeof(struct IDT) - 1,
    .base = interrupt_descriptor_table.table,
};

void initialize_idt(void)
{
    /* TODO :
     * Iterate all isr_stub_table,
     * Set all IDT entry with set_interrupt_gate()
     * with following values:
     * Vector: i
     * Handler Address: isr_stub_table[i]
     * Segment: GDT_KERNEL_CODE_SEGMENT_SELECTOR
     * Privilege: 0
     */
    for (int i = 0; i < IDT_MAX_ENTRY_COUNT; i++)
    {
        set_interrupt_gate(i, isr_stub_table[i], GDT_KERNEL_CODE_SEGMENT_SELECTOR, 0);
    }

    __asm__ volatile("lidt %0" : : "m"(_idt_idtr));
    __asm__ volatile("sti");
}

void set_interrupt_gate(uint8_t int_vector, void *handler_address, uint16_t gdt_seg_selector, uint8_t privilege)
{
    struct IDTGate *idt_int_gate = &interrupt_descriptor_table.table[int_vector];
    // TODO : Set handler offset, privilege & segment
    idt_int_gate->privilege = privilege;
    idt_int_gate->offset_low = (uint32_t)handler_address & 0xFFFF;
    idt_int_gate->offset_high = ((uint32_t)handler_address >> 16) & 0xFFFF;
    idt_int_gate->segment = gdt_seg_selector;
    idt_int_gate->_reserved = 0;

    // Target system 32-bit and flag this as valid interrupt gate
    idt_int_gate->_r_bit_1 = INTERRUPT_GATE_R_BIT_1;
    idt_int_gate->_r_bit_2 = INTERRUPT_GATE_R_BIT_2;
    idt_int_gate->_r_bit_3 = INTERRUPT_GATE_R_BIT_3;
    idt_int_gate->gate_32 = 1;
    idt_int_gate->valid = 1;
}