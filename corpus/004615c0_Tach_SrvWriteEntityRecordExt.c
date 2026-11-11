
/* 28-byte record (flag 8) */

int Tach_SrvWriteEntityRecordExt(SpED *param_1,vec3 *param_2,void *param_3)

{
  Tach_SrvWriteEntityRecord(param_1,param_2,param_3,8);
  *(short *)((int)param_3 + 0x18) = (short)((uint)param_1->scale >> 8);
  if ((param_1->netFlags & 4) != 0) {
    *(short *)((int)param_3 + 0x1a) = (short)param_1->desc->regSlot;
    return (int)param_3 + 0x1c;
  }
  *(undefined2 *)((int)param_3 + 0x1a) = 0xffff;
  return (int)param_3 + 0x1c;
}

