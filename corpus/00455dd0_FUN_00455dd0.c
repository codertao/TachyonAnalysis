
byte FUN_00455dd0(uint param_1)

{
  byte bVar1;
  
  bVar1 = (param_1 & 0x20000) != 0;
  if ((param_1 & 0x40000) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((param_1 & 0x80000) != 0) {
    bVar1 = bVar1 | 2;
  }
  return bVar1;
}

