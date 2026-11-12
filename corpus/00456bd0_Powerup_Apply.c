
/* sweep */

undefined4 Powerup_Apply(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_2 + 0x8c) + 0xd0;
  switch(*(undefined4 *)(iVar1 + 0xb0)) {
  case 1:
    iVar2 = Shield_GetMax(param_2 + 0x11c,iVar2);
    if ((iVar2 <= *(int *)(param_2 + 0x124)) && (iVar2 <= *(int *)(param_2 + 300))) {
      return 0;
    }
    Resupply_GiveShield(param_2,*(undefined4 *)(iVar1 + 0xb4));
    Resupply_SendText(0x66,*(undefined4 *)(param_2 + 0xdc));
    break;
  case 2:
    iVar2 = Power_GetHullMax(param_2 + 0x11c,iVar2,*(undefined4 *)(param_2 + 0xfc));
    if (iVar2 <= *(int *)(param_2 + 0x140)) {
      return 0;
    }
    Resupply_GiveHull(param_2,*(undefined4 *)(iVar1 + 0xb4));
    Resupply_SendText(0x69,*(undefined4 *)(param_2 + 0xdc));
    break;
  case 3:
    uVar3 = *(undefined4 *)(param_2 + 0xdc);
    uVar4 = 0x67;
    goto LAB_00456cf1;
  case 4:
    uVar3 = *(undefined4 *)(param_2 + 0xdc);
    uVar4 = 0x68;
LAB_00456cf1:
    Resupply_SendText(uVar4,uVar3);
    break;
  case 5:
    uVar3 = Resupply_GiveAmmo(iVar1,0x10,*(undefined4 *)(param_2 + 0xdc));
    return uVar3;
  case 6:
    uVar3 = Resupply_GiveAmmo(iVar1,2,*(undefined4 *)(param_2 + 0xdc));
    return uVar3;
  case 7:
    uVar3 = Resupply_GiveAmmo(iVar1,8,*(undefined4 *)(param_2 + 0xdc));
    return uVar3;
  case 8:
    Resupply_GiveShield(param_2,100000);
    Resupply_GiveHull(param_2,100000);
    Resupply_SendText(0x6f,*(undefined4 *)(param_2 + 0xdc));
    break;
  case 9:
    Resupply_GiveShield(param_2,*(undefined4 *)(iVar1 + 0xb4));
    Resupply_GiveHull(param_2,*(undefined4 *)(iVar1 + 0xb4));
    Resupply_SendText(0x6e,*(undefined4 *)(param_2 + 0xdc));
    break;
  case 10:
    uVar3 = Resupply_GiveCredits(iVar1,param_2);
    return uVar3;
  }
  SrvSend_ResupplyNotice
            (*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4),
             *(undefined4 *)(param_2 + 0xdc));
  return 1;
}

