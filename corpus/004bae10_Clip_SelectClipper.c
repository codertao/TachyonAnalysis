
/* refine: picks the polygon clip routine (DAT_006b0954) for mode 1..4 */

void Clip_SelectClipper(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    DAT_006b0954 = &LAB_004bb190;
    return;
  default:
    DAT_006b0954 = &LAB_004bb540;
    return;
  case 3:
    DAT_006b0954 = &LAB_004bb920;
    return;
  case 4:
    DAT_006b0954 = &LAB_004bbb30;
    return;
  }
}

