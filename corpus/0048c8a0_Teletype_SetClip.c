
/* sweep: guess */

void Teletype_SetClip(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x170;
  *(uint *)(&DAT_0056ac44 + iVar2) =
       (uint)((longlong)param_2 * (longlong)DAT_005a67e4) >> 0x10 |
       (int)((ulonglong)((longlong)param_2 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  *(uint *)(&DAT_0056ac48 + iVar2) =
       (uint)((longlong)param_3 * (longlong)DAT_005a67e4) >> 0x10 |
       (int)((ulonglong)((longlong)param_3 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  *(uint *)(&DAT_0056ac4c + iVar2) =
       (uint)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x10 |
       (int)((ulonglong)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  (&DAT_0056ac50)[param_1 * 0x5c] =
       (uint)((longlong)param_5 * (longlong)DAT_005a67e4) >> 0x10 |
       (int)((ulonglong)((longlong)param_5 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  lVar1 = (longlong)(param_4 - param_2) * (longlong)DAT_005a67e4;
  *(uint *)(&DAT_0056ace0 + iVar2) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(param_5 - param_3) * (longlong)DAT_005a67e4;
  *(uint *)(&DAT_0056ace4 + iVar2) = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return;
}

