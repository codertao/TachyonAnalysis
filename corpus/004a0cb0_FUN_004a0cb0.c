
void FUN_004a0cb0(int param_1)

{
  DAT_0055e05c = param_1;
  if (((DAT_00563fec == 0) && (DAT_00563ff0 == 0)) && (param_1 != 0)) {
    if (DAT_00563eac != (int *)0x0) {
      (**(code **)(*DAT_00563eac + 0x1c))(DAT_00563eac);
    }
    if (DAT_00563eb0 != (int *)0x0) {
      (**(code **)(*DAT_00563eb0 + 0x1c))(DAT_00563eb0,1,0);
    }
    if (DAT_00563ebc != (int *)0x0) {
      (**(code **)(*DAT_00563ebc + 0x1c))(DAT_00563ebc,1,0);
      return;
    }
  }
  else if (DAT_00563eac != (int *)0x0) {
    (**(code **)(*DAT_00563eac + 0x20))(DAT_00563eac);
  }
  return;
}

