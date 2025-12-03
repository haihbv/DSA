# 🎓 Cấu Trúc Dữ Liệu và Giải Thuật - PTIT

Repository chứa bài tập và code mẫu về Cấu Trúc Dữ Liệu và Giải Thuật (DSA) từ (PTIT).

## 📚 Nội dung

### 1. 🔄 Generation (Thuật toán sinh)

Thư mục `generation/` chứa các bài tập về thuật toán sinh:

- Sinh xâu nhị phân
- Sinh tập con, hoán vị, tổ hợp
- Mã Gray
- Tập quân sự
- Các bài toán liệt kê có điều kiện

**Số lượng:** ~40+ bài tập

### 2. 🔙 Backtracking (Quay lui)

Thư mục `backtracking/` chứa các bài tập về quay lui và nhánh cận:

- Bài toán N-Queens (Sắp xếp quân hậu)
- Duyệt mê cung
- Tổ hợp, hoán vị có điều kiện
- Bài toán người du lịch (TSP)
- Phân tích số
- Tập con có tổng bằng K

**Số lượng:** ~30+ bài tập

### 3. 📊 Graph (Đồ thị)

Thư mục `graph/` chứa các bài tập về lý thuyết đồ thị:

- **Biểu diễn đồ thị:** Danh sách cạnh, danh sách kề, ma trận kề
- **Duyệt đồ thị:** DFS, BFS
- **Tính liên thông:** Thành phần liên thông, liên thông mạnh
- **Chu trình:** Kiểm tra chu trình trên đồ thị có hướng/vô hướng
- **Đỉnh trụ và cạnh cầu:** Tìm khớp và cầu
- **Cây khung:** DFS, BFS, Kruskal
- **Ứng dụng:** Đồ thị hai phía, tô màu đồ thị, mạng xã hội

**Số lượng:** ~50+ bài tập

### 4. 🛠️ Utils (Thư mục tiện ích)

Thư mục `utils/` chứa các bài tập về:

- Mảng và danh sách
- Sắp xếp và tìm kiếm
- Ngăn xếp (Stack) và Hàng đợi (Queue)
- Các thuật toán cơ bản

**Số lượng:** ~60+ bài tập

### 5. 🧩 Thuat_toan (Các thuật toán khác)

Thư mục `thuat_toan/` chứa:

- Thuật toán trên đồ thị (graph/)
- Các thuật toán đặc biệt khác

## 🗂️ Cấu trúc thư mục

```text
dsa_code_ptit/
├── README.md
├── generation/          # Thuật toán sinh
│   ├── dsa01001_*.cpp
│   └── ...
├── backtracking/        # Quay lui
│   ├── dsa02001_*.cpp
│   └── ...
├── graph/              # Đồ thị
│   ├── dsa09001_*.cpp
│   ├── dsa10001_*.cpp
│   └── ...
├── utils/              # Tiện ích
│   ├── DSA06001.cpp
│   ├── DSA08001.cpp
│   └── ...
└── thuat_toan/         # Các thuật toán khác
    └── graph/
```

## 💻 Ngôn ngữ lập trình

**C++** - Tất cả các file được viết bằng C++

## 🚀 Cách sử dụng

### Biên dịch file C++

```bash
g++ -o output_name filename.cpp
```

### Chạy chương trình

```bash
./output_name          # Linux/Mac
output_name.exe        # Windows
```

## 📝 Quy tắc đặt tên

Các file được đặt tên theo quy ước:

- `dsa[số]_[tên_bài].cpp` - Bài tập DSA
- `ctdl_[số]_[tên_bài].cpp` - Bài tập CTDL

Ví dụ:

- `dsa01001_xau_nhi_phan_ke_tiep.cpp`
- `dsa02001_day_so_1.cpp`
- `dsa09001_chuyen_danh_sach_canh_sang_danh_sach_ke.cpp`

## 📖 Chủ đề chính

1. **Thuật toán sinh (Generation):** Liệt kê tất cả cấu hình
2. **Quay lui (Backtracking):** Tìm kiếm có hệ thống
3. **Đồ thị (Graph):** DFS, BFS, cây khung, chu trình
4. **Sắp xếp và tìm kiếm (Sorting & Searching):** Các thuật toán cơ bản
5. **Cấu trúc dữ liệu:** Stack, Queue, Array, List

## 🎯 Mục tiêu học tập

- Nắm vững các thuật toán sinh và quay lui
- Hiểu và áp dụng các thuật toán đồ thị
- Rèn luyện tư duy giải quyết vấn đề
- Chuẩn bị cho các kỳ thi lập trình

## 📌 Lưu ý

- Các file `.exe` là file biên dịch trên Windows
- Một số file không có phần mở rộng là file ghi chú hoặc đề bài
- Code được viết theo style của PTIT

## 🤝 Đóng góp

Nếu bạn phát hiện lỗi hoặc muốn cải thiện code, hãy tạo Pull Request hoặc Issue.

## 📧 Liên hệ

- Repository: [DSA - haihbv](https://github.com/haihbv/DSA)
- Branch: master

---

**Happy Coding! 🚀**
