
void FUN_004af2e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0062c12c;
  for (iVar1 = 60000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_006128c0;
  for (iVar1 = 0x600; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_006110a0;
  for (iVar1 = 0x600; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_00666aac = 0;
  DAT_0062c124 = 1;
  DAT_00666b00 = 0x28;
  FUN_004b5120(0);
  if (DAT_006691f8 == 0) {
    DAT_006691f8 = 0x80;
  }
  if (DAT_006691fc == 0) {
    DAT_006691fc = 0x80;
  }
  if (DAT_006691f4 == 0) {
    DAT_006691f4 = 0x80;
  }
  FUN_004b1b70(0x80,0x80,0x80,0x80,0x80);
  FUN_004af220(0xff,0xff,0xff);
  FUN_00445720();
  FUN_004af2c0(1);
  FUN_004af2d0(1);
  return;
}

