
undefined4 FUN_00456bd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  iVar2 = *(int *)(param_2 + 0x8c) + 0xd0;
  switch(*(undefined4 *)(iVar1 + 0xb0)) {
  case 1:
    iVar2 = FUN_00455e40(param_2 + 0x11c,iVar2);
    if ((iVar2 <= *(int *)(param_2 + 0x124)) && (iVar2 <= *(int *)(param_2 + 300))) {
      return 0;
    }
    FUN_00456ad0(param_2,*(undefined4 *)(iVar1 + 0xb4));
    FUN_004568a0(0x66,*(undefined4 *)(param_2 + 0xdc));
    break;
  case 2:
    iVar2 = FUN_00455e60(param_2 + 0x11c,iVar2,*(undefined4 *)(param_2 + 0xfc));
    if (iVar2 <= *(int *)(param_2 + 0x140)) {
      return 0;
    }
    FUN_00456b60(param_2,*(undefined4 *)(iVar1 + 0xb4));
    FUN_004568a0(0x69,*(undefined4 *)(param_2 + 0xdc));
    break;
  case 3:
    uVar3 = *(undefined4 *)(param_2 + 0xdc);
    uVar4 = 0x67;
    goto LAB_00456cf1;
  case 4:
    uVar3 = *(undefined4 *)(param_2 + 0xdc);
    uVar4 = 0x68;
LAB_00456cf1:
    FUN_004568a0(uVar4,uVar3);
    break;
  case 5:
    uVar3 = FUN_00456a20(iVar1,0x10,*(undefined4 *)(param_2 + 0xdc));
    return uVar3;
  case 6:
    uVar3 = FUN_00456a20(iVar1,2,*(undefined4 *)(param_2 + 0xdc));
    return uVar3;
  case 7:
    uVar3 = FUN_00456a20(iVar1,8,*(undefined4 *)(param_2 + 0xdc));
    return uVar3;
  case 8:
    FUN_00456ad0(param_2,100000);
    FUN_00456b60(param_2,100000);
    FUN_004568a0(0x6f,*(undefined4 *)(param_2 + 0xdc));
    break;
  case 9:
    FUN_00456ad0(param_2,*(undefined4 *)(iVar1 + 0xb4));
    FUN_00456b60(param_2,*(undefined4 *)(iVar1 + 0xb4));
    FUN_004568a0(0x6e,*(undefined4 *)(param_2 + 0xdc));
    break;
  case 10:
    uVar3 = FUN_00456910(iVar1,param_2);
    return uVar3;
  }
  FUN_0045d810(*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xb4),
               *(undefined4 *)(param_2 + 0xdc));
  return 1;
}

