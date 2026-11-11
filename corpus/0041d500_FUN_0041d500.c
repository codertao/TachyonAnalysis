
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d500(void)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 local_88 [132];
  
  puVar6 = DAT_0058f1c0;
  if (DAT_0058f1c0 != (uint *)0x0) {
    FUN_00452180();
    puVar9 = (undefined4 *)DAT_0058f1c0[1];
    bVar2 = *(byte *)(*DAT_005b2770 + 4);
    str_sprintf(local_88,s_TIME_sec____3_2f_005350cc,
                (double)((float)(int)puVar6[0x1c] * _DAT_0052e6d0));
    FUN_0048e970(local_88,DAT_005b2770,10,0x41,0xffff,0xffff,0x10000,0);
    fVar3 = (float)DAT_005b9600 * _DAT_0052e6c0;
    iVar1 = bVar2 + 0x41;
    fVar4 = (float)DAT_005b9604 * _DAT_0052e6c0;
    fVar5 = (float)DAT_005b9608 * _DAT_0052e6c0;
    uVar7 = Vec3_DistanceTo(&DAT_005b9600,&DAT_0058f204);
    str_sprintf(local_88,s_CAMERA_X____2_2f__Y____2_2f__Z___00535094,(double)fVar3,(double)fVar4,
                (double)fVar5,(double)((float)uVar7 * _DAT_0052e6c0));
    FUN_0048e970(local_88,DAT_005b2770,10,iVar1,0xff2020,0xffff,0x10000,0);
    str_sprintf(local_88,s_CAMERA_Y____2_2f__P____2_2f__R___00534ebc,
                (double)((float)DAT_005b95e8 * _DAT_0052e6c4 * _DAT_0052e5d8),
                (double)((float)DAT_005b95ec * _DAT_0052e6c4 * _DAT_0052e5d8),
                (double)((float)DAT_005b95f0 * _DAT_0052e6c4 * _DAT_0052e5d8));
    FUN_0048e970(local_88,DAT_005b2770,10,iVar1 + (uint)bVar2,0xff2080,0xffff,0x10000,0);
    uVar7 = 0;
    if (*DAT_0058f1c0 != 0) {
      do {
        iVar1 = puVar9[0xc];
        if (iVar1 == 0) {
          str_sprintf();
        }
        else {
          uVar8 = Dcb_FindById();
          str_sprintf(local_88,s__s___DCB____x_CF__x__EC__d__CM___00535068,*puVar9,iVar1,
                      *(undefined4 *)(iVar1 + 0x6c),*(undefined2 *)(iVar1 + 0x350),
                      *(undefined2 *)(iVar1 + 0x352),uVar8);
        }
        FUN_0048e970();
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 0x19;
      } while (uVar7 < *DAT_0058f1c0);
    }
  }
  return;
}

