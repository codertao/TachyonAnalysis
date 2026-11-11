
/* (value@EAX) PostMessage(main window, WM_USER, 0x49ce90, value) so asm can run C code on the UI
   thread */

void __cdecl Asm_PostMainThreadCallback(int value)

{
  Win_PostCallback(value);
  return;
}

