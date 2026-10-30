
void FUN_00403480(int param_1,int param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_3 + 0xc0) & 0x3f;
  *(byte *)(param_3 + 0xc0) = bVar1;
  if (*(int *)(param_2 + 0x10) < *(int *)(param_1 + 8)) {
    bVar1 = bVar1 | 0x40;
  }
  *(byte *)(param_3 + 0xc0) = bVar1;
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_2 + 0x10)) {
    *(byte *)(param_3 + 0xc0) = *(byte *)(param_3 + 0xc0) & 0x7f;
    return;
  }
  *(byte *)(param_3 + 0xc0) = *(byte *)(param_3 + 0xc0) | 0x80;
  return;
}

