
/* DirectSound path: GetCurrentPosition/Lock ring buffer, Snd_MixBlock over the 1-2 regions, Unlock
    */

void Snd_DSoundFill(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c [4];
  undefined1 local_8 [8];
  
  if (GLBL_audio_running == 0) {
    return;
  }
  if (DAT_005b9d24 == (int *)0x0) {
    return;
  }
  uStack_10 = 0;
  uStack_14 = 0;
  puStack_1c = local_8;
  uStack_18 = 0;
  puStack_20 = local_c;
  iStack_24 = DAT_005f9d54;
  iVar1 = (**(code **)(*DAT_005b9d24 + 0x2c))(DAT_005b9d24,0);
  if (iVar1 != 0) {
    return;
  }
  puVar3 = &DAT_005648dc;
  piVar2 = DAT_005b9d24;
  iVar1 = (**(code **)(*DAT_005b9d24 + 0x10))(DAT_005b9d24,&DAT_005648dc,&iStack_24);
  if (iVar1 != 0) goto LAB_004a8aeb;
  if (DAT_005648e0 < DAT_005648dc) {
    DAT_005f9d60 = (int *)((int)piVar2 + DAT_005648e0);
    iVar1 = DAT_005648dc - DAT_005648e0;
LAB_004a8ace:
    DAT_005f9d80 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
    Snd_MixBlock();
  }
  else if (DAT_005648dc < DAT_005648e0) {
    DAT_005f9d60 = (int *)(DAT_005648e0 + (int)piVar2);
    DAT_005f9d80 = (uint)(DAT_005f9d54 - DAT_005648e0) >> 2;
    Snd_MixBlock();
    DAT_005f9d60 = piVar2;
    iVar1 = DAT_005648dc;
    piVar2 = DAT_005f9d60;
    goto LAB_004a8ace;
  }
  DAT_005648e0 = DAT_005648dc;
LAB_004a8aeb:
  (**(code **)(*DAT_005b9d24 + 0x4c))(DAT_005b9d24,piVar2,puVar3,0,0);
  return;
}

