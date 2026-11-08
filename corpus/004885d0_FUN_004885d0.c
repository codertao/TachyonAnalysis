
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004885d0(void)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  int local_18 [5];
  
  local_18[0] = 0x11d;
  local_18[1] = 0x11e;
  local_18[2] = 0x260;
  local_18[3] = 0x18b;
  iVar2 = FUN_0046e7a0(local_28,local_38,local_58);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004699f0(s_STATS_PAK_0055881c);
    if (piVar3 == (int *)0x0) {
      piVar3 = local_18;
    }
    uVar4 = FUN_0046e930(local_58);
    FUN_00488520(uVar4);
    FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtStatsShip_0055880c,&DAT_0056c4a0);
    DAT_005711f0 = *piVar3;
    DAT_005711f4 = piVar3[1];
    DAT_005711f8 = piVar3[2];
    DAT_005711fc = piVar3[3];
    FUN_00445720();
    puVar5 = &DAT_005711a0;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    DAT_00571284 = Pak_Load(local_28,s_stats_curship_005587fc,local_38);
    Model_SelectState(&DAT_005711a0,0);
    lVar1 = (longlong)((DAT_005711f8 - DAT_005711f0 >> 1) + 1) * (longlong)DAT_005a67e4;
    _DAT_005711bc = 0;
    _DAT_005711c0 = 0;
    _DAT_005711c8 = 0;
    _DAT_005711cc = 0;
    _DAT_005711e0 = DAT_00571284;
    DAT_005711a4 = 0x20000;
    local_18[2] = (int)(longlong)
                       ROUND((((float)DAT_00604470 * _DAT_0052e998) /
                             (float)(int)((uint)lVar1 >> 0x10 |
                                         (int)((ulonglong)lVar1 >> 0x20) << 0x10)) * _DAT_0052e544 *
                             (float)_DAT_0052e990);
    _DAT_005711c4 = local_18[2];
    _DAT_005711d0 = local_18[2];
    DAT_005711a0 = DAT_005711a0 + 0x90;
    DAT_005711d4 = 0;
    _DAT_005711d8 = 0;
    _DAT_005711dc = 0;
  }
  return;
}

