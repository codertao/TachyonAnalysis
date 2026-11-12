
/* sweep */

void Teletype_Setup(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_64 [20];
  undefined4 local_14;
  
  uVar2 = 1;
  puVar3 = local_64;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (1 < param_2) {
    puVar3 = &DAT_0056ad38;
    do {
      local_64[0] = puVar3[-1];
      local_64[1] = *puVar3;
      local_14 = param_1;
      Teletype_Configure(uVar2 - 1,local_64,0x80);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0x5c;
    } while (uVar2 < param_2);
  }
  Teletype_InitSlot(param_2 - 1);
  return;
}

