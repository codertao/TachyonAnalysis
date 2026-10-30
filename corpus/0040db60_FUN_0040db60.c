
void FUN_0040db60(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  undefined1 local_638 [4];
  undefined4 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined2 local_614;
  _SYSTEMTIME local_610;
  ushort local_600 [768];
  
  local_614 = (undefined2)DAT_005b97b8;
  FUN_0040d990(&local_634,&DAT_00533540);
  FUN_0040d990(&local_624,s_GALSPAN_00533548);
  if (DAT_005b2b14 != 0) {
    FUN_0045e900(local_600);
    uVar2 = c_fopen(s_BWSTATS_TXT_005338a0,&DAT_005338ac);
    GetSystemTime(&local_610);
    FUN_004bc50d(local_638);
    uVar3 = FUN_004bc3ad(local_638);
    c_fprintf(uVar2,s__________________________________0053386c);
    c_fprintf(uVar2,s_______BASEWARS_GAME_____00533850);
    c_fprintf(uVar2,s__________________________________0053386c);
    uVar3 = FUN_004bc27f(uVar3);
    c_fprintf(uVar2,s___ROUND__d___on__u__u__u_time__s_0053382c,DAT_006af6e0,local_610.wMonth,
              local_610._6_4_ & 0xffff,local_610.wYear,uVar3);
    c_fprintf(uVar2,s__________________________________005337f8);
    puVar5 = local_600;
    uVar3 = FUN_00457f50(DAT_005b97b8);
    c_fprintf(uVar2,s___WINNING_SIDE___s_005337e4,uVar3);
    c_fprintf(uVar2,&DAT_005337e0);
    uVar3 = FUN_004580c0(&DAT_00533540);
    iVar4 = FUN_0040cf70(uVar3);
    c_fprintf(uVar2,s___BORA___T_LEVEL___d_TOTAL_CREDI_00533780,*(undefined4 *)(iVar4 + 4),local_62c
              ,local_630,local_628,local_634);
    c_fprintf(uVar2,&DAT_005337e0);
    uVar3 = FUN_004580c0(s_GALSPAN_00533548);
    iVar4 = FUN_0040cf70(uVar3);
    c_fprintf(uVar2,s___GALSPAN__T_LEVEL___d_TOTAL_CRE_00533720,*(undefined4 *)(iVar4 + 4),local_61c
              ,local_620,local_618,local_624);
    c_fprintf(uVar2,s__________________________________005337f8);
    uVar6 = 0;
    if (DAT_006af664 != 0) {
      do {
        iVar1 = *(int *)(DAT_006af660 + 200 + (uint)*puVar5 * 0x208);
        iVar4 = DAT_006af660 + (uint)*puVar5 * 0x208;
        if (iVar1 == 0) {
          c_fprintf(uVar2,s____03d_PLAYER__s___NO_INFO_AVAIL_005336bc,uVar6,iVar4 + 0xcc);
        }
        else {
          c_fprintf(uVar2,s____03d_PLAYER__s_KILLS___d__DEAT_005336e4,uVar6,iVar4 + 0xcc,
                    *(undefined4 *)(iVar1 + 0xe0),*(undefined4 *)(iVar1 + 0xf8),
                    *(undefined4 *)(iVar1 + 0x100),*(undefined4 *)(iVar1 + 0xfc));
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 3;
      } while (uVar6 < DAT_006af664);
    }
    c_fprintf(uVar2,s__________________________________0053386c);
    c_fclose(uVar2);
  }
  return;
}

