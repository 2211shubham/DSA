long taumBday(int b, int w, int bc, int wc, int z) {
    return b * min(bc, wc + z) + w * min(wc, bc + z);
}
