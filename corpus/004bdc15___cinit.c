
/* CRT: _fpmath + _initterm(XI) + _initterm(XC) */

void __cinit(void)

{
  if (PTR___fpmath_0056124c != (undefined *)0x0) {
    (*(code *)PTR___fpmath_0056124c)();
  }
  __initterm(&DAT_00532008,&DAT_00532014);
  __initterm(&DAT_00532000,&DAT_00532004);
  return;
}

