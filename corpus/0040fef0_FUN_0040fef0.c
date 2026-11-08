
void FUN_0040fef0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = DAT_005b95f0;
  iVar2 = DAT_005b95ec;
  iVar1 = DAT_005b95e8;
  if (param_1 == GLBL_SOME_CONTEXT) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(DAT_005b1f0c + 0x290);
  }
  FUN_0040f6d0(param_1);
  FUN_0040fe10(param_1,1,1);
  local_c = DAT_005b95e8 * 0x80 + iVar1 * -0x80 >> 7;
  local_8 = DAT_005b95ec * 0x80 + iVar2 * -0x80 >> 7;
  local_4 = DAT_005b95f0 * 0x80 + iVar3 * -0x80 >> 7;
  FUN_0040f070(&local_c);
  FUN_0040edd0(&DAT_005b9688,&DAT_005b95e8);
  return;
}

