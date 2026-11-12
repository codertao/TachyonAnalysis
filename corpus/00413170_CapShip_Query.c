
/* sweep: desc query method */

undefined4 CapShip_Query(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 1:
    return *(undefined4 *)(param_1 + 0xd8);
  case 2:
    Part_GetAttachWorldPos(param_1,*(undefined4 *)(param_1 + 0xe4),param_3);
    break;
  case 3:
    uVar1 = PartChain_FindFlag80(param_1,param_3);
    return uVar1;
  case 4:
    CapShip_GetMountPose(param_1,param_3,0);
    return 0;
  case 6:
    if (*(short *)(param_1 + 0x76) == 0xf) {
      uVar1 = Credits_Format(*(undefined4 *)(param_1 + 0x180),50000);
      return uVar1;
    }
    uVar1 = Credits_Format(*(undefined4 *)(param_1 + 0x168),
                           *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0xf0));
    return uVar1;
  case 7:
    if (*(short *)(param_1 + 0x76) != 0xf) {
      uVar1 = Shield_GetMax(param_1 + 0x144,*(int *)(param_1 + 0x8c) + 0xd0);
      uVar1 = Credits_Format(*(undefined4 *)(param_1 + 0x14c),uVar1);
      return uVar1;
    }
  }
  return 0;
}

