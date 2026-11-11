
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* record {name[12], u16 npal, u16 flags, w, h, size, RLE data, pal}: flags -> render state, RLE
   decode, mip */

int Pak_LoadTexture(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  LPCSTR done_for;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  CHAR local_c;
  uint local_8;
  
  local_8 = (uint)*(ushort *)(param_1 + 0xe);
  if ((local_8 & 0x4100) == 0x4100) {
    local_8 = local_8 & 0xffffbeef | 0x12000000;
  }
  else if ((local_8 & 0x6000) == 0x6000) {
    local_8 = local_8 & 0xffff9fef | 0x11000000;
  }
  else if ((local_8 & 0x2100) == 0x2100) {
    local_8 = local_8 & 0xffffdeef | 0x10200000;
  }
  else if ((local_8 & 0x4000) == 0x4000) {
    local_8 = local_8 & 0xffffbfef | 0x10102000;
  }
  else if ((local_8 & 0x110) == 0x110) {
    local_8 = local_8 & 0xfffffeef | 0x400000;
  }
  else if (((byte)*(ushort *)(param_1 + 0xe) & 0x88) == 0x88) {
    local_8 = local_8 & 0xffffff6f | 0x10020000;
  }
  done_for = (LPCSTR)FUN_004af180();
  uVar5 = DAT_00668f90;
  uVar6 = 0xffffffff;
  done_for[0x24] = -1;
  done_for[0x25] = -1;
  done_for[0x26] = -1;
  done_for[0x27] = -1;
  *(undefined4 *)(done_for + 0x44) = uVar5;
  do {
    pcVar8 = param_2;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar8 + -uVar6;
  pcVar10 = done_for;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  uVar7 = local_8 & 0x1000000;
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if (uVar7 == 0) {
    iVar4 = mem_GetMemEx_probably_alloc
                      (*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14),4,0,done_for);
    if (DAT_00668f58 != -1) {
      mark_alloc_memory_with_flags(iVar4,DAT_00668f5c);
    }
  }
  else {
    iVar4 = FUN_0049c5c0(*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14));
    FUN_0049c840(iVar4,s_ALPHA_PAL_IMAGE_0055ec48);
  }
  if (iVar4 == 0) {
    FUN_004b0180();
  }
  _DAT_00603100 = *(uint *)(param_1 + 0x10);
  DAT_00603104 = *(uint *)(param_1 + 0x14);
  uVar6 = 0x1f;
  if (_DAT_00603100 != 0) {
    for (; _DAT_00603100 >> uVar6 == 0; uVar6 = uVar6 - 1) {
    }
  }
  uVar2 = 0x1f;
  if (DAT_00603104 != 0) {
    for (; DAT_00603104 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  param_2._0_1_ = (byte)uVar2;
  done_for[0x31] = (byte)param_2;
  *(int *)(done_for + 0x28) = iVar4;
  done_for[0x30] = (byte)uVar6;
  *(undefined2 *)(done_for + 0x20) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)(done_for + 0x22) = *(undefined2 *)(param_1 + 0x14);
  *(uint *)(done_for + 0x34) = DAT_00668f60 | local_8;
  done_for[0x4c] = '\0';
  if ((uVar6 < 2) || (uVar2 < 2)) {
    FUN_004b0280(param_1,1 << ((byte)uVar6 & 0x1f),1 << ((byte)param_2 & 0x1f));
  }
  if (((DAT_00668f60 | local_8) & 0x800) != 0) {
    done_for[0x4c] = done_for[0x4c] + '\x01';
  }
  if (((DAT_00668f60 | local_8) & 0x1000) == 0) {
    done_for[0x4c] = done_for[0x4c] + '\x01';
  }
  uVar6 = Tex_FlagsToRenderState(DAT_00668f60 | local_8);
  *(uint *)(done_for + 0x34) = uVar6;
  if ((uVar6 & 7) != 0) {
    done_for[0x4c] = done_for[0x4c] + '\x01';
  }
  if (5 < (byte)done_for[0x4c]) {
    done_for[0x4c] = '\x05';
  }
  Rle_DecodePcx(param_1 + 0x1c,iVar4,*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14));
  if ((DAT_0062c128 != 0) && ((local_8 & 0x400) == 0)) {
    _DAT_00603100 = *(uint *)(param_1 + 0x10);
    DAT_00603104 = *(uint *)(param_1 + 0x14);
    FUN_004a3290(iVar4);
    if (uVar7 == 0) {
      uVar5 = FUN_0049c6f0(*(undefined4 *)(done_for + 0x28),
                           (uint)(*(ushort *)(done_for + 0x22) >> 1) *
                           (uint)(*(ushort *)(done_for + 0x20) >> 1),4);
      *(undefined4 *)(done_for + 0x28) = uVar5;
    }
    iVar4 = 0x1f;
    if (_DAT_00603100 != 0) {
      for (; _DAT_00603100 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar3 = 0x1f;
    if (DAT_00603104 != 0) {
      for (; DAT_00603104 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    local_c = (CHAR)iVar4;
    param_2._0_1_ = (byte)iVar3;
    done_for[0x30] = local_c;
    done_for[0x31] = (byte)param_2;
    *(undefined2 *)(done_for + 0x20) = DAT_00603100;
    *(undefined2 *)(done_for + 0x22) = (undefined2)DAT_00603104;
  }
  if ((local_8 & 0x20000) == 0) {
    if ((local_8 & 0x400000) == 0) {
      bVar12 = DAT_00668f7c == 0;
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c + param_1);
      puVar11 = &DAT_00602e00;
      for (iVar4 = 0xc0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      if (bVar12) {
        if ((local_8 & 0x8000) == 0) {
          Pal_RemapToGamePalette
                    (*(undefined4 *)(done_for + 0x28),
                     (uint)*(ushort *)(done_for + 0x22) * (uint)*(ushort *)(done_for + 0x20));
        }
        else {
          FUN_004ada90(DAT_00668f90,2);
          Pal_RemapToGamePalette
                    (*(undefined4 *)(done_for + 0x28),
                     (uint)*(ushort *)(done_for + 0x22) * (uint)*(ushort *)(done_for + 0x20));
          FUN_004ada90(DAT_00668f90,1);
        }
      }
    }
  }
  else {
    done_for[0x2c] = '\0';
    done_for[0x2d] = '\0';
    done_for[0x2e] = '\0';
    done_for[0x2f] = '\0';
  }
  if (uVar7 != 0) {
    param_1 = FUN_004b01d0(done_for,param_1);
  }
  if (DAT_00668f78 != (code *)0x0) {
    (*DAT_00668f78)(*(undefined4 *)(done_for + 0x28),*(undefined2 *)(done_for + 0x20),
                    *(undefined2 *)(done_for + 0x22),*(undefined4 *)(done_for + 0x34));
  }
  return param_1;
}

