
/* animated (0x2000) materials: DUMMYPCX fallback, compact frames */

void Pak_FixupAnimMaterials(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      if ((*(byte *)(param_1 + 0x16) & 8) != 0) {
        if (*(int *)(param_1 + 0x10) == 0) {
          uVar2 = TexCache_FindMaterial(s_DUMMYPCX_0055eb9c);
          *(undefined4 *)(param_1 + 0x10) = uVar2;
        }
        else if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x34) & 0x7000) == 0x2000) {
          iVar1 = Mat_CompactAnimFrames(param_1);
          if (iVar1 != 0) {
            uVar3 = (uVar3 - 1) + iVar1;
            param_1 = param_1 + -0x1c + iVar1 * 0x1c;
          }
        }
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 0x1c;
    } while (uVar3 < param_2);
  }
  return;
}

