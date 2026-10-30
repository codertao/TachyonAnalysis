
void FUN_00440080(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  POINT pt;
  BOOL BVar2;
  RECT local_10;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x94) != 0)) {
    local_10.left = *(int *)(param_2 + 0x80) + param_3;
    local_10.top = *(int *)(param_2 + 0x84) + param_4;
    local_10.right = *(int *)(param_2 + 0x88) + param_3;
    local_10.bottom = *(int *)(param_2 + 0x8c) + param_4;
    pt.y = DAT_005a54f8 + DAT_005a5500;
    pt.x = DAT_005a54fc + DAT_005a54f4;
    BVar2 = PtInRect(&local_10,pt);
    if (BVar2 != 0) {
      iVar1 = *(int *)(param_2 + 0x94);
      *(undefined4 *)(iVar1 + 0x210) = 0;
      if (*(int *)(iVar1 + 0x1f8) == 1) {
        *(undefined4 *)(iVar1 + 0x1f8) = 2;
        if ((DAT_00603e48 & 1) == 0) {
          if (DAT_00562bf8 != 0) {
            *(undefined4 *)(iVar1 + 0x1f8) = 4;
          }
          DAT_00562bf8 = 0;
        }
        else {
          DAT_00562bf8 = 1;
        }
      }
    }
  }
  return;
}

