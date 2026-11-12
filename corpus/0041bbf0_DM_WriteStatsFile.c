
/* sweep: DMSTATS.TXT */

void DM_WriteStatsFile(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  undefined1 local_614 [4];
  _SYSTEMTIME local_610;
  ushort local_600 [768];
  
  if (DAT_005b2b14 != 0) {
    TachSrv_BuildScoreboard(local_600);
    uVar3 = c_fopen(s_DMSTATS_TXT_00534c10,&DAT_005338ac);
    GetSystemTime(&local_610);
    _time(local_614);
    uVar4 = _localtime(local_614);
    c_fprintf(uVar3,s__________________________________0053386c);
    c_fprintf(uVar3,s_______DEATHMATCH_GAME_____00534bf4);
    c_fprintf(uVar3,s__________________________________0053386c);
    uVar4 = _asctime(uVar4);
    c_fprintf(uVar3,s___ROUND__d___on__u__u__u_time__s_0053382c,DAT_006af6e0,local_610.wMonth,
              local_610._6_4_ & 0xffff,local_610.wYear,uVar4);
    c_fprintf(uVar3,s__________________________________005337f8);
    uVar6 = 0;
    puVar5 = local_600;
    if (DAT_006af664 != 0) {
      do {
        iVar1 = DAT_006af660 + (uint)*puVar5 * 0x208;
        iVar2 = *(int *)(iVar1 + 200);
        if (iVar2 == 0) {
          c_fprintf(uVar3,s____03d_PLAYER__s___NO_INFO_AVAIL_005336bc,uVar6,iVar1 + 0xcc);
        }
        else {
          c_fprintf(uVar3,s____03d_PLAYER__s_KILLS___d__DEAT_00534bc8,uVar6,iVar1 + 0xcc,
                    *(undefined4 *)(iVar2 + 0xe0),*(undefined4 *)(iVar2 + 0xf8));
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 3;
      } while (uVar6 < DAT_006af664);
    }
    c_fprintf(uVar3,s__________________________________0053386c);
    c_fclose(uVar3);
  }
  return;
}

