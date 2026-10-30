
void FUN_00497380(void)

{
  int iVar1;
  int iVar2;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = DAT_00565450;
  iVar2 = DAT_0056544c * 0x110;
  local_28 = DAT_00565420;
  local_14 = DAT_00565448;
  local_2c = &DAT_0055a560 + DAT_0056544c * 0x44;
  local_20 = &DAT_0056543c;
  local_1c = 1;
  local_18 = &DAT_00565430;
  local_24 = &DAT_00565424;
  local_8 = DAT_00565458;
  local_4 = DAT_0056545c;
  iVar1 = (*(code *)(&PTR_FUN_0055a5d0)[DAT_0056544c * 0x44])(&local_2c);
  if ((iVar1 != 0) && (((&DAT_0055a638)[iVar2] & 2) == 0)) {
    FUN_004957a0(iVar1,&DAT_0056543c,&DAT_00565430,DAT_00565448);
  }
  return;
}

