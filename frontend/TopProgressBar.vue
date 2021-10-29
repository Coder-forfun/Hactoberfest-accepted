<template>
  <div
    class="top-progress-bar"
    :style="{
      width: percent + '%',
      backgroundColor: isSuccess ? successColor : failedColor,
      opacity: show ? 1 : 0,
    }"
  ></div>
</template>

<script>
export default {
  name: "TopProgressBar",

  data() {
    return {
      percent: 0,
      show: false,
      isSuccess: true,
      duration: 3000,
      successColor: "#ffc107",
      failedColor: "#ff0000",
    };
  },

  methods: {
    start() {
      this.show = true;
      this.isSuccess = true;
      if (this._timer) {
        clearInterval(this._timer);
        this.percent = 0;
      }
      this._cut = 10000 / Math.floor(this.duration);
      this._timer = setInterval(() => {
        this.increase(this._cut * Math.random());
        if (this.percent > 95) {
          this.finish();
        }
      }, 100);
      return this;
    },
    set(num) {
      this.show = true;
      this.isSuccess = true;
      this.percent = Math.floor(num);
      return this;
    },
    get() {
      return Math.floor(this.percent);
    },
    increase(num) {
      this.percent = this.percent + Math.floor(num);
      return this;
    },
    decrease(num) {
      this.percent = this.percent - Math.floor(num);
      return this;
    },
    finish() {
      this.percent = 100;
      this.hide();
      return this;
    },
    pause() {
      clearInterval(this._timer);
      return this;
    },
    hide() {
      clearInterval(this._timer);
      this._timer = null;
      setTimeout(() => {
        this.show = false;
        this.$nextTick(() => {
          setTimeout(() => {
            this.percent = 0;
          }, 200);
        });
      }, 500);
      return this;
    },
    fail() {
      this.isSuccess = false;
      this.percent = 100;
      this.hide();
      return this;
    },
  },
};
</script>
<style>
    .top-progress-bar {
    position: fixed;
    top: 0px;
    left: 0px;
    right: 0px;
    height: 4px;
    width: 0%;
    transition: width 0.2s, opacity 0.4s;
    opacity: 0;
    z-index: 999999;
    }
</style>