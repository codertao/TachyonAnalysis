
void FUN_0048aa60(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((DAT_0056c2e0 != 0) && (DAT_0056c368 == 0)) {
    iVar3 = *(int *)(param_1 + 0x58);
    if ((*(byte *)(iVar3 + 0x28) & 1) != 0) {
      if ((*(byte *)(param_1 + 0x18) & 0x10) == 0) {
        uVar2 = *(uint *)(iVar3 + 0x30);
      }
      else {
        local_8 = *(int *)(iVar3 + 0x30);
        lVar1 = (longlong)local_8 * (longlong)*(int *)(param_1 + 0x1c);
        uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      }
      local_14 = *(int *)(param_1 + 0x34) - DAT_005b9600;
      local_10 = *(int *)(param_1 + 0x38) - DAT_005b9604;
      local_c = *(int *)(param_1 + 0x3c) - DAT_005b9608;
      iVar3 = FUN_004e058e(&DAT_0056c370,&local_14);
      if ((int)-uVar2 <= iVar3) {
        local_20 = DAT_005b9600 +
                   ((uint)((longlong)DAT_0056c370 * (longlong)iVar3) >> 0x10 |
                   (int)((ulonglong)((longlong)DAT_0056c370 * (longlong)iVar3) >> 0x20) << 0x10);
        local_1c = DAT_005b9604 +
                   ((uint)((longlong)DAT_0056c374 * (longlong)iVar3) >> 0x10 |
                   (int)((ulonglong)((longlong)DAT_0056c374 * (longlong)iVar3) >> 0x20) << 0x10);
        local_18 = DAT_005b9608 +
                   ((uint)((longlong)DAT_0056c378 * (longlong)iVar3) >> 0x10 |
                   (int)((ulonglong)((longlong)DAT_0056c378 * (longlong)iVar3) >> 0x20) << 0x10);
        iVar3 = Vec3_DistanceTo(&local_20,param_1 + 0x34);
        if (iVar3 <= (int)uVar2) {
          iVar3 = Coll_SegmentVsModel(&DAT_005b9600,&DAT_0056c2bc,param_1 + 0x18,local_2c,0x10000,0)
          ;
          if (iVar3 != 0) {
            DAT_0056c368 = 1;
          }
        }
      }
    }
  }
  return;
}

