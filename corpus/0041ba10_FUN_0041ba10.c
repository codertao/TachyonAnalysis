
void FUN_0041ba10(SpED *param_1,uint param_2)

{
  if (param_1 != (SpED *)0x0) {
    while (param_1->netId != param_2) {
      param_1 = param_1->next;
      if (param_1 == (SpED *)0x0) {
        return;
      }
    }
    Quad_UnlinkDynamic(param_1);
    FUN_0041b9b0(param_1);
  }
  return;
}

