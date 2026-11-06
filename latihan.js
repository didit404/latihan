const nilai_siswa=[60,85,40,90,75,50,95];
if (nilai_siswa.includes(85)) {
    const posisi_85 = nilai_siswa.indexOf(85);
    console.log("Index nilai 85 adalah: ", posisi_85);
}

const hasil_filter = nilai_siswa.filter((x) => x > 75);
console.log("Hasil filter (nilai > 75): ", hasil_filter);