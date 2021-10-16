//The window.history object contains the browsers history.
/*history.back() - same as clicking back in the browser
history.forward() - same as clicking forward in the browser*/
//Example of histroy back 
<html>
<head>
<script>
function goBack() {
  window.history.back()
}
</script>
</head>
<body>

<input type="button" value="Back" onclick="goBack()">

</body>
</html>
