
/* slews ent +0x100 by <=15/frame toward throttle*130/1024 (255 on burner or 0x5b9094); also
   installed as ent +0x68 callback by Hyper_TintPlayerShip; reader of +0x100 not traced (engine
   glow?) - guess */

void PlayerEngine_SlewLevel(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_005b1ee8 == 0) && (DAT_005b9094 == 0)) {
    iVar2 = DAT_005b1ee0 * 0x82 >> 10;
  }
  else {
    iVar2 = 0xff;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  iVar2 = iVar2 - iVar1;
  if (0xf < iVar2) {
    *(int *)(param_1 + 0x100) = iVar1 + 0xf;
    return;
  }
  if (iVar2 < -0xf) {
    iVar2 = -0xf;
  }
  *(int *)(param_1 + 0x100) = iVar1 + iVar2;
  return;
}

