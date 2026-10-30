
void FUN_0042db90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  iVar1 = Cbin_GetScalar(s_TELETYPE_00536be4,&DAT_005367f4,local_18,0x18,0);
  if (iVar1 != 0) {
    uVar2 = FUN_0042cca0(param_1,local_18);
    *(undefined4 *)(param_1 + 0xa64) = uVar2;
  }
  if (*(int *)(param_1 + 0xa64) == 0) {
    *(undefined4 *)(param_1 + 0xa64) = DAT_005b1b54;
  }
  iVar1 = Cbin_GetScalar(s_TELETYPE_00536be4,s_CHAR_COLOR_00536bd8,local_18,0x18,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa68) = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    uVar2 = FUN_0042cce0(param_1,local_18);
    *(undefined4 *)(param_1 + 0xa68) = uVar2;
  }
  iVar1 = Cbin_GetScalar(s_TELETYPE_00536be4,s_LIT_COLOR_00536bcc,local_18,0x18,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa6c) = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    uVar2 = FUN_0042cce0(param_1,local_18);
    *(undefined4 *)(param_1 + 0xa6c) = uVar2;
  }
  Cbin_GetParam(s_TELETYPE_00536be4,&DAT_00536bc4,0,0,&local_1c,1,1);
  *(undefined4 *)(param_1 + 0xa70) = local_1c;
  Cbin_GetParam(s_TELETYPE_00536be4,&DAT_00536bc4,0,0,&local_1c,1,2);
  *(undefined4 *)(param_1 + 0xa74) = local_1c;
  Cbin_GetParam(s_TELETYPE_00536be4,&DAT_00536bc4,0,0,&local_1c,1,3);
  *(undefined4 *)(param_1 + 0xa78) = local_1c;
  Cbin_GetParam(s_TELETYPE_00536be4,&DAT_00536bc4,0,0,&local_1c,1,4);
  *(undefined4 *)(param_1 + 0xa7c) = local_1c;
  return;
}

