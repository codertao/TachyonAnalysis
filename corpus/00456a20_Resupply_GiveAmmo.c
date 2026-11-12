
/* sweep */

undefined4 Resupply_GiveAmmo(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = Resupply_FindAmmoSlot(param_3,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  piVar2 = (int *)(param_3 + 0x16c);
  do {
    if ((piVar2[-2] != 0) && (*(int *)(piVar2[-2] + 4) == param_2)) {
      iVar1 = *piVar2 + *(int *)(param_1 + 0xb4);
      *piVar2 = iVar1;
      if (piVar2[-1] < iVar1) {
        *piVar2 = piVar2[-1];
      }
      SrvSend_Ammo(param_3,uVar3,*piVar2);
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 3;
  } while (uVar3 < 8);
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 == 5) {
    uVar4 = 0x6b;
  }
  else if (iVar1 == 6) {
    uVar4 = 0x6d;
  }
  else {
    if (iVar1 != 7) goto LAB_00456aab;
    uVar4 = 0x6c;
  }
  Resupply_SendText(uVar4,param_3);
LAB_00456aab:
  SrvSend_ResupplyNotice(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),param_3);
  return 1;
}

