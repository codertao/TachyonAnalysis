
void FUN_004454c0(void)

{
  undefined4 uVar1;
  int local_18 [6];
  
  uVar1 = GLBL_spacesav[0x32];
  local_18[3] = 0;
  local_18[4] = 0;
  local_18[5] = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  if (DAT_005b9084 != 0) {
    DAT_005b9608 = DAT_00562c48;
    DAT_005b95e8 = DAT_00544420;
    GLBL_spacesav[0x32] = 1;
    DAT_005b9600 = 0;
    DAT_005b9604 = 0;
    DAT_005b95ec = 0;
    DAT_005b95f0 = 0;
    call_math_todo_with_rotation(&DAT_005b9628,-DAT_00544420,0,0);
    local_18[0] = DAT_00544420;
    FUN_004b1940(local_18 + 3,local_18);
    FUN_004452e0();
    if (DAT_0054441c != 0) {
      FUN_004450e0();
    }
  }
  GLBL_spacesav[0x32] = uVar1;
  return;
}

