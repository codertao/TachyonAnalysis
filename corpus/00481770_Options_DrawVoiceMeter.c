
/* sweep: guess */

void Options_DrawVoiceMeter(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (DAT_00563d74 == &PTR_GLBL_spacesav_64__00555b98) {
    if (DAT_00571180 == 0) {
      DAT_00571188 = 0;
    }
    iVar2 = 0x58;
    uVar3 = 0x7ff8;
    iVar1 = 4;
    do {
      if (DAT_00571188 < uVar3) {
        uVar4 = 0x7f;
      }
      else {
        uVar4 = 0xff;
      }
      Gfx_DefineColor(0x1f,uVar4,0,0);
      Options_DrawVoiceMeterBar(0x233,iVar2,0x1a,4,0x1f);
      iVar2 = iVar2 + 6;
      uVar3 = uVar3 - 0x492;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar3 = 0x6db0;
    iVar1 = 8;
    do {
      if (uVar3 < DAT_00571188) {
        uVar5 = 0xff;
        uVar4 = 0xff;
      }
      else {
        uVar5 = 0x7f;
        uVar4 = 0x7f;
      }
      Gfx_DefineColor(0x1f,uVar4,uVar5,0);
      Options_DrawVoiceMeterBar(0x233,iVar2,0x1a,4,0x1f);
      iVar2 = iVar2 + 6;
      uVar3 = uVar3 - 0x492;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar3 = 0x4920;
    iVar1 = 0x10;
    do {
      if (uVar3 < DAT_00571188) {
        uVar4 = 0xff;
      }
      else {
        uVar4 = 0x7f;
      }
      Gfx_DefineColor(0x1f,0,uVar4,0);
      Options_DrawVoiceMeterBar(0x233,iVar2,0x1a,4,0x1f);
      iVar2 = iVar2 + 6;
      uVar3 = uVar3 - 0x492;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

