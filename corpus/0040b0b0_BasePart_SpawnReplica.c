
/* sweep */

int BasePart_SpawnReplica
              (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              int param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[7] == 0) {
    if (DAT_005a6730 != 0) {
      BasePart_ErrNoAttach(param_4,param_1);
    }
    return 0;
  }
  iVar1 = DcbPool_Alloc(&DAT_005b3288,0xc,*(undefined4 *)(param_5 + 100));
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x8c) = param_3;
  *(int *)(iVar1 + 0xdc) = param_5;
  *(undefined4 *)(iVar1 + 0x58) = *param_1;
  *(undefined4 *)(iVar1 + 0x18) = 0x10;
  *(int *)(iVar1 + 0x60) = iVar1;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = param_1[3];
  *(undefined1 **)(iVar1 + 0x70) = &LAB_0040acb0;
  *(undefined1 **)(iVar1 + 0x84) = &LAB_0040b080;
  param_1[0x1f] = iVar1;
  *(undefined1 *)(iVar1 + 0xc2) = param_6;
  *(undefined4 *)(iVar1 + 0xec) = 0xffffffff;
  Part_SetTransform(iVar1,param_1,0,0);
  CapPartReplica_Init(iVar1,param_1);
  uVar2 = ShortArray_At(*(undefined4 *)(param_5 + 0xe8),param_1[0x11]);
  *(undefined4 *)(iVar1 + 0xe8) = uVar2;
  if ((g_FlightStateFlags & 4) != 0) {
    uVar2 = Quad_FindEntById(uVar2,g_SrvCurShip->quadrant);
    *(undefined4 *)(iVar1 + 0xf4) = uVar2;
  }
  List_PushFrontW(iVar1,&DAT_005b3280);
  if (*(int *)(iVar1 + 200) != 0) {
    *(code **)(iVar1 + 0x68) = Starbase_FreeParts;
  }
  return iVar1;
}

