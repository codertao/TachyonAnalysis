
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: palref.mem */

void MnuImage_LoadPcxRemapped(uint param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte local_d;
  int local_c;
  int local_8;
  uint local_4;
  
  iVar2 = param_2;
  if ((param_2 != 0) && (iVar3 = __stricmp(param_2,&DAT_0053f1e4), iVar3 != 0)) {
    iVar3 = __stricmp(iVar2 + 0x40,&DAT_0053f1e4);
    if (iVar3 != 0) {
      if (*(int *)(iVar2 + 0x1674) != 0) {
        MnuImage_Free(param_1,iVar2);
      }
      iVar3 = Pal_Load(iVar2 + 0x1654);
      *(int *)(iVar2 + 0x1650) = iVar3;
      if (iVar3 == 0) {
        Mem_DumpStatsToFile(s_palref_mem_0053fe60);
      }
      Pal_Remap(*(undefined4 *)(iVar2 + 0x1650),0x80,0x80,0x80,0x80,0x80);
      local_c = Image_Load(iVar2 + 0x40);
      *(undefined4 *)(iVar2 + 0x1664) = _DAT_00603100;
      *(undefined4 *)(iVar2 + 0x1668) = DAT_00603104;
      *(undefined4 *)(iVar2 + 0x1674) = DAT_00603108;
      if ((*(int *)(iVar2 + 0x166c) == 0) || (*(int *)(iVar2 + 0x166c) == -1)) {
        *(undefined4 *)(iVar2 + 0x166c) = *(undefined4 *)(iVar2 + 0x1664);
      }
      if ((*(int *)(iVar2 + 0x1670) == 0) || (*(int *)(iVar2 + 0x1670) == -1)) {
        *(undefined4 *)(iVar2 + 0x1670) = *(undefined4 *)(iVar2 + 0x1668);
      }
      if (*(int *)(iVar2 + 0x166c) < 0x101) {
        if (param_3 == 0) {
          param_3 = 1;
        }
        uVar4 = param_3;
        local_4 = *(uint *)(iVar2 + 0x1670) / param_3;
        if (local_4 < 0x101) {
          Tex_CalcPow2Dims(*(int *)(iVar2 + 0x166c),local_4,&param_2,&local_d);
          iVar3 = 0;
          puVar5 = (undefined4 *)(iVar2 + 0x50);
          param_1 = 0;
          if (uVar4 != 0) {
            do {
              puVar5[7] = 0x30000008;
              puVar5[2] = *(undefined4 *)(iVar2 + 0x166c);
              uVar1 = *(uint *)(iVar2 + 0x1670);
              local_8 = 1 << ((byte)param_2 & 0x1f);
              *(byte *)(puVar5 + 6) = (byte)param_2;
              *puVar5 = 0;
              puVar5[1] = 0;
              puVar5[3] = uVar1 / uVar4;
              *(byte *)((int)puVar5 + 0x19) = local_d;
              Mem_AllocZeroTagged(puVar5 + 4,local_8 * (1 << (local_d & 0x1f)),4,
                                  s_MNU_PCX_IMAGE_0053fe50,0xa000);
              if ((*(byte *)(iVar2 + 0x167c) & 4) != 0) {
                puVar5[7] = puVar5[7] | 0x10;
              }
              if ((*(byte *)(iVar2 + 0x167c) & 8) != 0) {
                puVar5[7] = puVar5[7] | 0x2000000;
              }
              if ((*(byte *)(iVar2 + 0x167c) & 0x10) != 0) {
                puVar5[7] = puVar5[7] | 0x200000;
              }
              if ((*(byte *)(iVar2 + 0x167c) & 0x20) != 0) {
                puVar5[7] = puVar5[7] | 0x20000;
                puVar5[5] = param_4;
              }
              Blit_SetSrc(local_c,DAT_00603110,_DAT_00603100);
              Blit_SetDst(puVar5[4],8,1 << (*(byte *)(puVar5 + 6) & 0x1f));
              Blit_CopyRect(0,0,puVar5[2],puVar5[3],0,iVar3);
              iVar3 = iVar3 + local_4;
              puVar5 = puVar5 + 0xb;
            } while ((param_1 < 0x80) && (param_1 = param_1 + 1, uVar4 = param_3, param_1 < param_3)
                    );
          }
          if (local_c != 0) {
            OurFreeMem(local_c);
          }
        }
      }
    }
  }
  return;
}

