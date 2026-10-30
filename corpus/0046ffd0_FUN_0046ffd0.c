
void FUN_0046ffd0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x51; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[2] = param_2;
  param_1[3] = DAT_00562c20;
  param_1[4] = DAT_00562c24;
  param_1[5] = DAT_00562c18;
  param_1[6] = DAT_00562c30;
  param_1[7] = DAT_00562c28;
  param_1[8] = DAT_00562c2c;
  param_1[9] = DAT_00562c1c;
  param_1[10] = DAT_00562c38;
  param_1[0xb] = DAT_00562c34;
  param_1[0xc] = DAT_00562c14;
  param_1[0xd] = DAT_00562c3c;
  param_1[0xe] = DAT_00562c40;
  return;
}

