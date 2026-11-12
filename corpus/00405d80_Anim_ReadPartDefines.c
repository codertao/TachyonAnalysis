
/* defines/PART_DEFINE name,index (index = sub-object in the pak) */

void Anim_ReadPartDefines(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  DAT_005b9ab0 = Cbin_CountEntries(s_DEFINES_005326f4,s_PART_DEFINE_005326fc);
  if (DAT_005b9ab0 != 0) {
    Mem_AllocTagged(&DAT_005b9ab4,DAT_005b9ab0 * 0x24,4,s_DEFINE_TMP_BUFFER_005326e0,0xcccc);
    iVar1 = Cbin_SelectGroup(s_DEFINES_005326f4);
    if ((iVar1 != 0) && (uVar3 = 0, DAT_005b9ab0 != 0)) {
      iVar1 = DAT_005b9ab4 + 0x20;
      iVar2 = DAT_005b9ab4;
      do {
        Cbin_FindParam_Global(s_PART_DEFINE_005326fc,iVar2,0x20,0,4,1);
        Cbin_GetParamN(s_PART_DEFINE_005326fc,0,0,iVar1,1,2);
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x24;
        iVar1 = iVar1 + 0x24;
      } while (uVar3 < DAT_005b9ab0);
    }
  }
  return;
}

