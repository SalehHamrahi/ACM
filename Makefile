CXX = g++
CXXFLAGS = -Wall -O2

# پوشه خروجی
OUTDIR = bin

# اسم فایل‌های cpp بدون پسوند
TARGETS = a1 a3 b1 b2 c1 c2 c3

# اضافه کردن مسیر خروجی به اسم اجرایی‌ها
BINS = $(addprefix $(OUTDIR)/, $(TARGETS))

# تارگت پیش‌فرض
all: $(OUTDIR) $(BINS)

# ساختن فولدر خروجی اگر نبود
$(OUTDIR):
	mkdir -p $(OUTDIR)

# ساختن هر فایل اجرایی
$(OUTDIR)/%: %.cpp
	@echo "🔨 Building $@..."
	-$(CXX) $(CXXFLAGS) -o $@ $< || echo "❌ Failed to build $@"

# تمیز کردن خروجی‌ها
clean:
	rm -rf $(OUTDIR)
