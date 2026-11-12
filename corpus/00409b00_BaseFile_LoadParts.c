
/* sweep */

void BaseFile_LoadParts(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  DAT_005b9808 = Cbin_CountIndexed_Global(s_PART__02d_00532c78);
  if (DAT_005b9808 != 0) {
    Mem_AllocZeroTagged(param_1 + 1,DAT_005b9808 << 7,4,s_BASE_PART_BUFFER_00532d4c,0xffff);
    BaseFile_ReadPartNames();
    uVar2 = param_1[1];
    *param_1 = DAT_005b9808;
    uVar1 = 0;
    if (DAT_005b9808 != 0) {
      do {
        Ocf_ParsePart(uVar2,uVar1,param_1);
        uVar1 = uVar1 + 1;
        uVar2 = uVar2 + 0x80;
      } while (uVar1 < DAT_005b9808);
    }
    BaseFile_ComputePartTransforms(param_1);
  }
  return;
}

