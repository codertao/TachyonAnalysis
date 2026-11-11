
void FUN_00410d90(SpED *param_1)

{
  if (((param_1[1].ang.z ^ DAT_005897e4) & 0xf) == 0) {
    Power_Regen(&param_1[1].render,&param_1->desc[1].getText,0x12,1);
  }
  Dcb_SetRangeFlags((PowerBlock *)&param_1[1].render,&param_1->desc[1].getText,param_1);
  return;
}

