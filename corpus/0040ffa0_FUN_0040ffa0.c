
void FUN_0040ffa0(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_18 = DAT_005b95e8;
  local_14 = DAT_005b95ec;
  local_10 = DAT_005b95f0;
  if (param_1 == DAT_005b3300) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(DAT_005b1f0c + 0x290);
  }
  FUN_0040f920(param_1);
  FUN_0040fe10(param_1,1,1);
  FUN_0040eef0(local_c,&local_18,&DAT_005b95e8);
  FUN_0040f070(local_c);
  FUN_0040edd0(&DAT_005b9688,&DAT_005b95e8);
  return;
}

