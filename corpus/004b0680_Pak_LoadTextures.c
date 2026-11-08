
/* texture section: u32 count + records; skip if cached by name, else Pak_LoadTexture */

void Pak_LoadTextures(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 local_20 [8];
  
  uVar1 = *param_1;
  uVar6 = 0;
  param_1 = param_1 + 1;
  if (uVar1 != 0) {
    do {
      if (DAT_006128a0 == 0) {
        uVar4 = 0xffffffff;
        puVar3 = param_1;
        do {
          puVar8 = puVar3;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          puVar8 = (uint *)((int)puVar3 + 1);
          uVar5 = *puVar3;
          puVar3 = puVar8;
        } while ((char)uVar5 != '\0');
        uVar4 = ~uVar4;
        puVar7 = (undefined4 *)((int)puVar8 - uVar4);
        puVar9 = local_20;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      else {
        str_sprintf(local_20,s__s__s_0055eba8,param_1,DAT_006128a0);
      }
      iVar2 = TexCache_FindByName(local_20);
      if ((iVar2 == 0) &&
         (puVar3 = (uint *)Pak_LoadTexture(param_1,local_20), bVar10 = puVar3 != param_1,
         param_1 = puVar3, bVar10)) {
        uVar6 = uVar6 + 1;
      }
      param_1 = (uint *)PakTex_Next(param_1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return;
}

