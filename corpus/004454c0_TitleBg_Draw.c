
/* sweep */

void TitleBg_Draw(void)

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
    call_Math_SinCos3((float *)&DAT_005b9628,-DAT_00544420,0,0);
    local_18[0] = DAT_00544420;
    Rend_SetCamera(local_18 + 3,local_18);
    TitleBg_Render3D();
    if (DAT_0054441c != 0) {
      TitleBg_UpdateCamera();
    }
  }
  GLBL_spacesav[0x32] = uVar1;
  return;
}

