
/* sweep */

void BasePart_StartDying(SpED *param_1)

{
  uint uVar1;
  
  if (param_1 != (SpED *)0x0) {
    if ((((param_1[1].next)->pos).x & 6) == 0) {
      Quad_UnlinkStatic(param_1);
      Quad_Link(param_1);
    }
    param_1->think = &LAB_00409f60;
    uVar1 = global_bad_shift_rng();
    param_1[1].poolSerial = ((uVar1 >> 4) % 0x32) * 4 + 0x32;
    uVar1 = global_bad_shift_rng();
    *(uint *)&param_1[1].field_0x20 = (uVar1 >> 4) % (uint)param_1[1].poolSerial;
    if ((((param_1[1].next)->pos).x & 0x20) != 0) {
      param_1[1].poolSerial = 1;
      *(undefined4 *)&param_1[1].field_0x20 = 0;
    }
  }
  return;
}

