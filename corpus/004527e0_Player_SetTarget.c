
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Player_SetTarget(int param_1,int param_2)

{
  *(int *)(GLBL_SOME_CONTEXT + 0x90) = param_1;
  if (param_1 == 0) {
    Player_ClearTarget();
  }
  CamTable_SetEntity(*(undefined4 *)(GLBL_SOME_CONTEXT + 0x90),2);
  if ((param_2 != param_1) && (param_1 != 0)) {
    DAT_005b39f4 = 0xffffffff;
    _DAT_005b2130 = 0;
    DAT_005b2138 = DAT_005b213c;
    _DAT_005b2140 = 0;
    Snd_Play2D(1,9,0,0xff);
    *(undefined4 *)(GLBL_SOME_CONTEXT + 0x110) = 0;
  }
  return;
}

