
/* advance far cursor conn+0x138, write next 2 not yet stamped this packet (flag 0x10); cursor=0 at
   end -> rebuild */

void * __cdecl Tach_SrvWriteFarRecords(TachConn *conn,void *out,vec3 *origin,short *hdr)

{
  SpED *ent;
  uint uVar1;
  
  uVar1 = 0;
  if (conn->farCursor == (SpED **)0x0) {
    return out;
  }
  do {
    ent = *conn->farCursor;
    if (ent != (SpED *)0x0) {
      if (ent == (SpED *)0xffffffff) {
        conn->farCursor = (SpED **)0x0;
        return out;
      }
      if ((ent->snapStamp != g_SnapStamp) && ((ent->netFlags & 1) == 0)) {
        out = Tach_SrvWriteEntityRecord(ent,origin,out,0x10);
        *hdr = *hdr + 1;
        uVar1 = uVar1 + 1;
      }
    }
    conn->farCursor = conn->farCursor + 1;
  } while (uVar1 < 2);
  return out;
}

