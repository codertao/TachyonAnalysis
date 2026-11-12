
/* CRT: fp exception */

void __set_errno(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)__errno();
    *puVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    puVar1 = (undefined4 *)__errno();
    *puVar1 = 0x22;
    return;
  }
  return;
}

