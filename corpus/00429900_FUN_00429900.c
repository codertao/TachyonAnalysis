
void FUN_00429900(void)

{
  SpED *self;
  int iVar1;
  byte bVar2;
  undefined1 local_18 [24];
  
  iVar1 = GLBL_SOME_CONTEXT;
  if ((DAT_005b0748 == 0) &&
     (((DAT_005b0744 == 0 || (DAT_005b0750 < 0xc9)) ||
      (bVar2 = global_bad_shift_rng(), 5 < (bVar2 & 0x1f))))) {
    call_math_todo_with_rotation
              (local_18,-*(int *)(iVar1 + 0x4c),-*(int *)(iVar1 + 0x50),-*(int *)(iVar1 + 0x54));
    call_copy_mathresult_to_global(local_18);
    for (self = DAT_005b31c8; self != (SpED *)0x0; self = *(SpED **)&self->field_0x94) {
      Radar_DrawEntity(self);
    }
  }
  return;
}

