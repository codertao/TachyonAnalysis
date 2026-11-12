
/* sweep */

void Gfx_LockOTW(undefined4 param_1)

{
  if (DAT_00564ae4 != 0) {
    (*DAT_00604560)(param_1);
    return;
  }
  vid_LockOTW();
  return;
}

