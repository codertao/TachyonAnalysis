
/* init AI ship DCB: install think 0x4035d0 (when +0xf7!=1) */

void Dcb_InitAiShip(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  if (*(char *)(param_1 + 0xf7) != '\x01') {
    *(code **)(param_1 + 0x68) = Dcb_Think_AiShip;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    local_14 = *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20);
    local_18 = 1;
    local_10 = 6;
    local_c = 0;
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    Mission_PostEvent(&local_18,*(undefined4 *)(param_1 + 100));
    if (*(int *)(iVar1 + 0x100) != 0) {
      iVar2 = Quad_GroupSlotExists
                        (*(undefined4 *)(iVar1 + 100),*(undefined4 *)(*(int *)(iVar1 + 0x100) + 4));
      Quad_GroupSlotCount(*(undefined4 *)(iVar1 + 100),*(undefined4 *)(*(int *)(iVar1 + 0x100) + 4),
                          &param_1,local_1c);
      if (iVar2 == param_1) {
        local_14 = *(undefined4 *)(*(int *)(iVar1 + 0x100) + 4);
        local_18 = 5;
        local_10 = 6;
        local_c = 0;
        local_8 = 0xffffffff;
        local_4 = 0xffffffff;
        Mission_PostEvent(&local_18,*(undefined4 *)(iVar1 + 100));
      }
    }
    Sped_MsgIdentified(*(undefined4 *)(*(int *)(iVar1 + 0x8c) + 0x18),*(undefined4 *)(iVar1 + 0xd8),
                       iVar1 + 0xdc,*(undefined4 *)(iVar1 + 100));
    *(undefined1 *)(iVar1 + 0xf7) = 1;
    *(undefined4 *)(iVar1 + 0x104) = 0xb;
  }
  return;
}

